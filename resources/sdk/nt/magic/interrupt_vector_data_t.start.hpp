#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interrupt_connection_type_t), "_INTERRUPT_VECTOR_DATA.Type", type, 0x0, 0x20, true, 0xbf3cc2d523f631a4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_VECTOR_DATA.Vector", vector, 0x20, 0x20, true, 0x5ea52fc0b5e01b56)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INTERRUPT_VECTOR_DATA.Irql", irql, 0x40, 0x8, true, 0x3fbe84737ebe75f0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_INTERRUPT_VECTOR_DATA.Polarity", polarity, 0x60, 0x20, true, 0xd09bcbf4b11947c2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_INTERRUPT_VECTOR_DATA.Mode", mode, 0x80, 0x20, true, 0x856f2398e21e3fd8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_INTERRUPT_VECTOR_DATA.TargetProcessors", target_processors, 0xc0, 0x80, true, 0xc2c474de8ef3420c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_remapping_info_t), "_INTERRUPT_VECTOR_DATA.IntRemapInfo", int_remap_info, 0x140, 0x80, true, 0xba0b50df0835a3cb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_VECTOR_DATA.ControllerInput.Gsiv", gsiv, 0x0, 0x20, true, 0x73ad6b74cd36f192)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INTERRUPT_VECTOR_DATA.ControllerInput.WakeInterrupt", wake_interrupt, 0x20, 0x1, true, 0x5f0fcdc23a8ae4f1, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_controller_input_t), "_INTERRUPT_VECTOR_DATA.ControllerInput", controller_input, 0x1c0, 0x40, true, 0x90814dea762c523)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INTERRUPT_VECTOR_DATA.HvDeviceId", hv_device_id, 0x200, 0x40, true, 0xddabe430b670bf59)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_INTERRUPT_VECTOR_DATA.XapicMessage.Address", address, 0x0, 0x40, true, 0x347fa34e0be69246)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_VECTOR_DATA.XapicMessage.DataPayload", data_payload, 0x40, 0x20, true, 0xf1d3ab9e80faf3e2)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_xapic_message_t), "_INTERRUPT_VECTOR_DATA.XapicMessage", xapic_message, 0x240, 0x80, true, 0x3dab2f2fd1e1057f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_ht_intr_info_t), "_INTERRUPT_VECTOR_DATA.Hypertransport.IntrInfo", intr_info, 0x0, 0x40, true, 0xac3e26dfc0135594)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_hypertransport_t), "_INTERRUPT_VECTOR_DATA.Hypertransport", hypertransport, 0x240, 0x40, true, 0xa291977226cc5bc7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_INTERRUPT_VECTOR_DATA.GenericMessage.Address", address, 0x0, 0x40, true, 0x61d35de04b5b57a1)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_VECTOR_DATA.GenericMessage.DataPayload", data_payload, 0x40, 0x20, true, 0x7212301b89a94d9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_xapic_message_t), "_INTERRUPT_VECTOR_DATA.GenericMessage", generic_message, 0x240, 0x80, true, 0xb7456524336c3a5c)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hal::apic_destination_mode_t), "_INTERRUPT_VECTOR_DATA.MessageRequest.DestinationMode", destination_mode, 0x0, 0x20, true, 0xa2168ad47a3fcc25)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_message_request_t), "_INTERRUPT_VECTOR_DATA.MessageRequest", message_request, 0x240, 0x20, true, 0x2f314256775569b5)
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
#define _m20
#endif