#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KWAIT_BLOCK.WaitListEntry", wait_list_entry, 0x0, 0x80, true, 0x1eedebd5419659a4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KWAIT_BLOCK.WaitType", wait_type, 0x80, 0x8, true, 0x7e56997a646f6b50)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KWAIT_BLOCK.BlockState", block_state, 0x88, 0x8, true, 0x6daca3d298c81417)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KWAIT_BLOCK.WaitKey", wait_key, 0x90, 0x10, true, 0x2ec7e2e56c41e085)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KWAIT_BLOCK.Thread", thread, 0xc0, 0x40, true, 0x59cc609f0e11423c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kqueue_t*), "_KWAIT_BLOCK.NotificationQueue", notification_queue, 0xc0, 0x40, true, 0x70fc6e58c8942627)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KWAIT_BLOCK.Object", object, 0x100, 0x40, true, 0x55f016bd4330315b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t*), "_KWAIT_BLOCK.Dpc", dpc, 0xc0, 0x40, true, 0x43120129d4e3aab9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif