// Dynamixel SDK platform independent header
#ifndef _DYNAMIXEL_HEADER
#define _DYNAMIXEL_HEADER


#ifdef __cplusplus
extern "C" {
#endif

#include "dxl_hal.h"


#define BROADCAST_ID		(254)

#define INST_PING           0x01
#define INST_READ           0x02
#define INST_WRITE          0x03
#define INST_REG_WRITE      0x04
#define INST_ACTION         0x05
#define INST_RESET          0x06
#define INST_DIGITAL_RESET  0x07    //reset과 동일한데 id를 제외하고 나머지를는 reset동일
#define INST_SYSTEM_READ    0x0C    //어떤 주소위치든 1 byte 를 무조건 읽을수 있게. CT 범위를 초과해도 읽음.
#define INST_SYSTEM_WRITE   0x0D    //어떤 주소위치든 1 byte 를 무조건 쓸수 있게. CT 범위를 초과해도 씀.
#define INST_SYNC_WRITE     0x83
#define INST_SYNC_REG_WRITE 0x84    //action을 내려야만 실행. 여러 ID dxl 에 명령 보냄.

#define ERRBIT_VOLTAGE		(1)
#define ERRBIT_ANGLE		(2)
#define ERRBIT_OVERHEAT		(4)
#define ERRBIT_RANGE		(8)
#define ERRBIT_CHECKSUM		(16)
#define ERRBIT_OVERLOAD		(32)
#define ERRBIT_INSTRUCTION	(64)

#define MAXNUM_RXPARAM		(60)
#define MAXNUM_TXPARAM		(150)

#define	COMM_TXSUCCESS		(0)
#define COMM_RXSUCCESS		(1)
#define COMM_TXFAIL			(2)
#define COMM_RXFAIL			(3)
#define COMM_TXERROR		(4)
#define COMM_RXWAITING		(5)
#define COMM_RXTIMEOUT		(6)
#define COMM_RXCORRUPT		(7)

#include "HaViMo2.h"


///////////// device control methods ////////////////////////
int dxl_initialize( int devIndex, int baudnum );
void dxl_terminate(void);


// functions for making a packet
void dxl_set_txpacket_id( int id );
void dxl_set_txpacket_instruction( int instruction );
void dxl_set_txpacket_parameter( int index, int value );
void dxl_set_txpacket_length( int length );

int dxl_get_rxpacket_parameter( int index );
int dxl_get_rxpacket_length(void);
int dxl_get_rxpacket_error( int errbit );

// utility for value
int dxl_makeword( int lowbyte, int highbyte );
int dxl_get_lowbyte( int word );
int dxl_get_highbyte( int word );

////////// packet communication methods ///////////////////////
void dxl_tx_packet(void);
void dxl_rx_packet(void);
void dxl_txrx_packet(void);

void dxl_SetPosition(int ServoID, int Position, int Speed);
int dxl_get_result(void);

//////////// high communication methods ///////////////////////
void dxl_ping( int id );
int dxl_read_byte( int id, int address );
void dxl_write_byte( int id, int address, int value );
int dxl_read_word( int id, int address );
void dxl_write_word( int id, int address, int value );

// 2012-03-14 jason
void dxl_reset( int id );


/**
 * Low-level function to retrieve an image buffer from a HaViMo2 camera module.
 * @param id HaViMo2 camera ID (fixed as 100 in HaViMo2 firmware).
 * @param hvm2rb Pointer to a user region buffer data type.
 * @see dxl_capture()
 * @return The number of valid regions found in the image.
 */
uint8_t dxl_recover(uint8_t id, HaViMo2_Region_Buffer_t* hvm2rb);


#ifdef __cplusplus
}
#endif

#endif
