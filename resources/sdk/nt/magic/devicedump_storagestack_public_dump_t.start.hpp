#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::devicedump_structure_version_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP.Descriptor", descriptor, 0x0, 0x60, true, 0x84a5b83c9bf7ea0b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP.dwReasonForCollection", dw_reason_for_collection, 0x60, 0x20, true, 0x960a58a6a0699d9f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP.cDriverName", c_driver_name, 0x80, 0x80, true, 0x8f05fe22d9e46855)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP.uiNumRecords", ui_num_records, 0x100, 0x20, true, 0x3d23dca1ec076fa9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::devicedump_storagestack_public_state_record_t, 1>), "_DEVICEDUMP_STORAGESTACK_PUBLIC_DUMP.RecordArray", record_array, 0x120, 0xe0, true, 0x3c5eeb8ec4e3ad1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif