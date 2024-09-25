#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.Header", header, 0x0, 0x20, true, 0xcb9f88792252287c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x5983c3bb3d59de62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::receive_queue_type_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.QueueType", queue_type, 0x40, 0x20, true, 0x70f30f9571da4452)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.QueueId", queue_id, 0x60, 0x20, true, 0x7c2b70a1ae24c193)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.QueueGroupId", queue_group_id, 0x80, 0x20, true, 0x87f9dec9f4b34c7a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.ProcessorAffinity", processor_affinity, 0xc0, 0x80, true, 0x74f4f9c067c88879)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.NumSuggestedReceiveBuffers", num_suggested_receive_buffers, 0x140, 0x20, true, 0x4a5de078d648f7bc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.MSIXTableEntry", msix_table_entry, 0x160, 0x20, true, 0xcf96a4a0efe338ce)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.LookaheadSize", lookahead_size, 0x180, 0x20, true, 0xb2e29159db0b2a49)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.VmName", vm_name, 0x1a0, 0x20, true, 0xfdfaa4f9bf5713ba)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.QueueName", queue_name, 0x11c0, 0x20, true, 0xd132ca87ffcb4267)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.PortId", port_id, 0x21e0, 0x20, true, 0x64d64cf389b49104)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.InterruptCoalescingDomainId", interrupt_coalescing_domain_id, 0x2200, 0x20, true, 0x66f27c70ae734231)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_QUEUE_PARAMETERS.QosSqId", qos_sq_id, 0x2220, 0x20, true, 0x64e0d9d48d14a8a5)
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
#endif