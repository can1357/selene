#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.Version", version, 0x0, 0x0, false, 0x9207072e29f3d6b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.Size", size, 0x0, 0x0, false, 0x151f9e2ef99925e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_CHILD_PF_DATA.ChildControllerId", child_controller_id, 0x0, 0x0, false, 0xf8c66ed7f03a63)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 26>), "_MFND_CHILD_PF_DATA.SerialNumber", serial_number, 0x0, 0x0, false, 0x2b73d8588f8e3619)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.Flags", flags, 0x0, 0x0, false, 0xf7f2ff82b39686b7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.ChildControllerState", child_controller_state, 0x0, 0x0, false, 0x56445b78caa4faf2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.NameSpaceCount", name_space_count, 0x0, 0x0, false, 0xf80dc36b7cc4c6be)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.NameSpace1Id", name_space1_id, 0x0, 0x0, false, 0x9db9c6da87a94f4f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.NameSpace1TotalStorageBytes", name_space1_total_storage_bytes, 0x0, 0x0, false, 0x2e980083c072130a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.NameSpace2Id", name_space2_id, 0x0, 0x0, false, 0x31a981afb56811c3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.NameSpace2TotalStorageBytes", name_space2_total_storage_bytes, 0x0, 0x0, false, 0x4d8c0181fc194272)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.NameSpace3Id", name_space3_id, 0x0, 0x0, false, 0x1e2ef00ab1830314)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.NameSpace3TotalStorageBytes", name_space3_total_storage_bytes, 0x0, 0x0, false, 0x1a832fe41f027fcc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.NameSpace4Id", name_space4_id, 0x0, 0x0, false, 0xb8396967ae87dac)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.NameSpace4TotalStorageBytes", name_space4_total_storage_bytes, 0x0, 0x0, false, 0xad6907895334cf5b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.IoQueuePairCount", io_queue_pair_count, 0x0, 0x0, false, 0x50124d5bb3f57659)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_CHILD_PF_DATA.MsiMessageCount", msi_message_count, 0x0, 0x0, false, 0x7f7ee9fcb7e27409)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::mfnd_qos_t), "_MFND_CHILD_PF_DATA.QoS", qo_s, 0x0, 0x0, false, 0x3b8abdbdf16fadd7)
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
#endif