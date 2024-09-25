#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_SET_CHILD_PF_QOS_ADDITIONAL.Version", version, 0x0, 0x0, false, 0x407fc73f3b66f968)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_SET_CHILD_PF_QOS_ADDITIONAL.Size", size, 0x0, 0x0, false, 0x531be4fe87d798c3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_SET_CHILD_PF_QOS_ADDITIONAL.ChildControllerId", child_controller_id, 0x0, 0x0, false, 0x11d9aa9b6127e7b5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_SET_CHILD_PF_QOS_ADDITIONAL.Flags", flags, 0x0, 0x0, false, 0x691f093b79bcb52d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::mfnd_qos_t), "_MFND_SET_CHILD_PF_QOS_ADDITIONAL.QoS", qo_s, 0x0, 0x0, false, 0xaa09f785f4d12edb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif