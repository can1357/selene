#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 3>), "_KREQUEST_PACKET.CurrentPacket", current_packet, 0x0, 0xc0, true, 0xbf6c363856196fab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*, void*)>*), "_KREQUEST_PACKET.WorkerRoutine", worker_routine, 0xc0, 0x40, true, 0xce254ff5261f9c22)
#else
#define _m00
#define _m01
#endif