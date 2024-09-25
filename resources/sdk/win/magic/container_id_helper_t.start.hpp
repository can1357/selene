#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ContainerIdHelper._savedContainerId", saved_container_id, 0x40, 0x80, true, 0x56784294e95d9f80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ContainerIdHelper._testHookListenerId", test_hook_listener_id, 0xe0, 0x20, true, 0x322f72af94b42040)
#else
#define _m00
#define _m01
#endif