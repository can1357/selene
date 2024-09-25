#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERF_CONTROL_STATE_SELECTION.SelectedState", selected_state, 0x0, 0x40, true, 0xbba92c584d2f684c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONTROL_STATE_SELECTION.SelectedPercent", selected_percent, 0x40, 0x20, true, 0x39e7d2a7e88dad9e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONTROL_STATE_SELECTION.SelectedFrequency", selected_frequency, 0x60, 0x20, true, 0xdf3ade87323da411)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONTROL_STATE_SELECTION.MinPercent", min_percent, 0x80, 0x20, true, 0x72f6398733835a00)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONTROL_STATE_SELECTION.MaxPercent", max_percent, 0xa0, 0x20, true, 0x2801de2ac22df27d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONTROL_STATE_SELECTION.TolerancePercent", tolerance_percent, 0xc0, 0x20, true, 0x712dc14491f05d17)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONTROL_STATE_SELECTION.EppPercent", epp_percent, 0xe0, 0x20, true, 0x4882b8e7d70491fa)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONTROL_STATE_SELECTION.AutonomousActivityWindow", autonomous_activity_window, 0x100, 0x20, true, 0x946f6ccef159b2c3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERF_CONTROL_STATE_SELECTION.Autonomous", autonomous, 0x120, 0x8, true, 0xde9497f30465baf1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERF_CONTROL_STATE_SELECTION.InheritFromDomain", inherit_from_domain, 0x128, 0x8, true, 0x7f1d342d4ee49567)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif