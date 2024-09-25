#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DBGUI_CREATE_PROCESS.HandleToProcess", handle_to_process, 0x0, 0x40, true, 0x4c15123ae4b09608)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DBGUI_CREATE_PROCESS.HandleToThread", handle_to_thread, 0x40, 0x40, true, 0x75398d20d7680cc3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dbgkm::create_process_t), "_DBGUI_CREATE_PROCESS.NewProcess", new_process, 0x80, 0x80, true, 0x892fd03b58e254ba)
#else
#define _m00
#define _m01
#define _m02
#endif