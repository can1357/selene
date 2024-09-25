#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MdTimer.m_Period", m_period, 0x0, 0x20, true, 0x16b99059a97f6f75)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MdTimer.m_IsExtTimer", m_is_ext_timer, 0x20, 0x8, true, 0x1715a1b056eb0fca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::kdpc_t*, void*, void*, void*)>*), "_MdTimer.m_TimerCallback", m_timer_callback, 0x40, 0x40, true, 0xb17663b456ce25fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_MdTimer.KernelTimer", kernel_timer, 0x80, 0x0, true, 0xf86c52e7784468e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_MdTimer.TimerDpc", timer_dpc, 0x280, 0x0, true, 0x5becfcc12135683e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ex::timer_t*, void*)>*), "_MdTimer.m_ExTimerCallback", m_ex_timer_callback, 0x40, 0x40, true, 0xf880c5568ba0b9b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::timer_t*), "_MdTimer.m_KernelExTimer", m_kernel_ex_timer, 0x80, 0x40, true, 0x90b4da1d4f795098)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MdTimer.m_TimerContext", m_timer_context, 0x480, 0x40, true, 0x6d4b7d31e03ea189)
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