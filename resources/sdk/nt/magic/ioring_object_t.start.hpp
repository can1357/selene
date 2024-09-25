#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IORING_OBJECT.Type", type, 0x0, 0x0, false, 0x76ab86a0477f6cdd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IORING_OBJECT.Size", size, 0x0, 0x0, false, 0x5b0138a292f0913)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_info_t), "_IORING_OBJECT.UserInfo", user_info, 0x0, 0x0, false, 0x91b89ef78586523e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IORING_OBJECT.Section", section, 0x0, 0x0, false, 0x3a19add46362ef86)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_submission_queue_t*), "_IORING_OBJECT.SubmissionQueue", submission_queue, 0x0, 0x0, false, 0x5f88fc819710e666)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_IORING_OBJECT.CompletionQueueMdl", completion_queue_mdl, 0x0, 0x0, false, 0xc702f2bf0c4cb73e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct os::ioring_completion_queue_t*), "_IORING_OBJECT.CompletionQueue", completion_queue, 0x0, 0x0, false, 0xfd0ba6fc287d3f47)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IORING_OBJECT.ViewSize", view_size, 0x0, 0x0, false, 0xa0356e50bce99978)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_IORING_OBJECT.InSubmit", in_submit, 0x0, 0x0, false, 0x397e9950edcac543)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IORING_OBJECT.CompletionLock", completion_lock, 0x0, 0x0, false, 0xa2769a00903aafa9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IORING_OBJECT.SubmitCount", submit_count, 0x0, 0x0, false, 0x7eba943f8baa06c0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IORING_OBJECT.CompletionCount", completion_count, 0x0, 0x0, false, 0xab9a2c0e77d1fb68)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IORING_OBJECT.CompletionWaitUntil", completion_wait_until, 0x0, 0x0, false, 0x589515d9b5630810)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_IORING_OBJECT.CompletionEvent", completion_event, 0x0, 0x0, false, 0xbcadaaecccdcc0a7)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IORING_OBJECT.SignalCompletionEvent", signal_completion_event, 0x0, 0x0, false, 0x22462b28011de5a1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_IORING_OBJECT.CompletionUserEvent", completion_user_event, 0x0, 0x0, false, 0xa558302cd30b2618)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IORING_OBJECT.RegBuffersCount", reg_buffers_count, 0x0, 0x0, false, 0xa9cf86571b24569c)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct iop::mc_buffer_entry_t**), "_IORING_OBJECT.RegBuffers", reg_buffers, 0x0, 0x0, false, 0x62d2f89899b80767)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IORING_OBJECT.RegFilesCount", reg_files_count, 0x0, 0x0, false, 0x7dabc4790e752bb0)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_IORING_OBJECT.RegFiles", reg_files, 0x0, 0x0, false, 0xa53cde809abee8d3)
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
#define _m16
#define _m17
#define _m18
#define _m19
#endif