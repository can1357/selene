#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_THROTTLED_WORK_ITEM_CTRL.ThrottleLock", throttle_lock, 0x0, 0x40, true, 0x2455754db73355de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fltmgr::throttle_element_t, 3>), "_THROTTLED_WORK_ITEM_CTRL.Queues", queues, 0x40, 0x40, true, 0x6b161e875422ee67)
#else
#define _m00
#define _m01
#endif