#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_READ_BACKUP_INFORMATION_OUT.BufferLength", buffer_length, 0x0, 0x20, true, 0x260c7bed2fa698e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_TXFS_READ_BACKUP_INFORMATION_OUT.Buffer", buffer, 0x0, 0x8, true, 0x353dd46f0a229426)
#else
#define _m00
#define _m01
#endif