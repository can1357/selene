#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CONTAINER_ROOT_INFO_OUTPUT.ContainerRootIdLength", container_root_id_length, 0x0, 0x10, true, 0x974ddb185ed9b398)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_CONTAINER_ROOT_INFO_OUTPUT.ContainerRootId", container_root_id, 0x10, 0x8, true, 0x62950a5f1f571aea)
#else
#define _m00
#define _m01
#endif