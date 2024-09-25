#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_reader_completion_routine_t ), "FxUsbPipeContinuousReader.m_ReadCompleteCallback", m_read_complete_callback, 0x0, 0x40, true, 0xe5f5a5be433f533f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxUsbPipeContinuousReader.m_ReadCompleteContext", m_read_complete_context, 0x40, 0x40, true, 0xb083b3ac33839464)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_usb_readers_failed_t ), "FxUsbPipeContinuousReader.m_ReadersFailedCallback", m_readers_failed_callback, 0x80, 0x40, true, 0xcc8e994fbf11adf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::usb_pipe_t*), "FxUsbPipeContinuousReader.m_Pipe", m_pipe, 0xc0, 0x40, true, 0x98ced8c0501a08ae)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::lookaside_list_t*), "FxUsbPipeContinuousReader.m_Lookaside", m_lookaside, 0x100, 0x40, true, 0x4a783acabe58b2fb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxUsbPipeContinuousReader.m_TargetDevice", m_target_device, 0x140, 0x40, true, 0x80d49250dac81c69)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfmemory_offset_t), "FxUsbPipeContinuousReader.m_Offsets", m_offsets, 0x180, 0x80, true, 0x3e2bc96b8fd9bf80)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_work_item_t*), "FxUsbPipeContinuousReader.m_WorkItem", m_work_item, 0x200, 0x40, true, 0x1502bc720ac8f18e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxUsbPipeContinuousReader.m_WorkItemRerunContext", m_work_item_rerun_context, 0x240, 0x40, true, 0xad01babf4e47b1fb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t volatile*), "FxUsbPipeContinuousReader.m_WorkItemThread", m_work_item_thread, 0x280, 0x40, true, 0x58be01056143da42)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxUsbPipeContinuousReader.m_WorkItemFlags", m_work_item_flags, 0x2c0, 0x20, true, 0x201932ba22632516)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipeContinuousReader.m_NumFailedReaders", m_num_failed_readers, 0x2e0, 0x8, true, 0x4f354539bf6e7ae4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipeContinuousReader.m_NumReaders", m_num_readers, 0x2e8, 0x8, true, 0x822f3869a88014a3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipeContinuousReader.m_WorkItemQueued", m_work_item_queued, 0x2f0, 0x8, true, 0xa8970338bc9a66a5)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxUsbPipeContinuousReader.m_ReadersSubmitted", m_readers_submitted, 0x2f8, 0x8, true, 0x1bbbe806c2f7e6d3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fx::usb_pipe_repeat_reader_t, 1>), "FxUsbPipeContinuousReader.m_Readers", m_readers, 0x300, 0xc0, true, 0xb85e6206f9481dbf)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif