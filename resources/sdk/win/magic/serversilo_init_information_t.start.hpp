#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SERVERSILO_INIT_INFORMATION.DeleteEvent", delete_event, 0x0, 0x40, true, 0x97999f802866a1b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SERVERSILO_INIT_INFORMATION.IsDownlevelContainer", is_downlevel_container, 0x40, 0x8, true, 0xa7db2df2470a8b8c)
#else
#define _m00
#define _m01
#endif