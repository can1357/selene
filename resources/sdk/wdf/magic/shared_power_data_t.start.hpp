#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "SharedPowerData.m_WaitWakeIrp", m_wait_wake_irp, 0x0, 0x40, true, 0xdeb8d22403f09c40)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SharedPowerData.m_WaitWakeOwner", m_wait_wake_owner, 0x40, 0x8, true, 0x919a87b3bdcf0865)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "SharedPowerData.m_ExtendWatchDogTimer", m_extend_watch_dog_timer, 0x48, 0x8, true, 0xc28794782a0f07ec)
#else
#define _m00
#define _m01
#define _m02
#endif