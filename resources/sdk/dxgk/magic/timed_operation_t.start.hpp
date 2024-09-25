#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_TIMED_OPERATION.Size", size, 0x0, 0x10, true, 0xee4eb1ee157fcbf0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_TIMED_OPERATION.OwnerTag", owner_tag, 0x40, 0x40, true, 0x309d675f4684a312)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_TIMED_OPERATION.OsHandled", os_handled, 0x80, 0x8, true, 0x81f13b86a4b0bb0c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_TIMED_OPERATION.TimeoutTriggered", timeout_triggered, 0x88, 0x8, true, 0xdd162aca43f2be9f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_TIMED_OPERATION.Timeout", timeout, 0xc0, 0x40, true, 0x7c80bd0fc61f6cb6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_TIMED_OPERATION.StartTick", start_tick, 0x100, 0x40, true, 0xca611d2639c61130)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif