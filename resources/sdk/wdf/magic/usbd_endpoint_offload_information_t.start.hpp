#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.Size", size, 0x0, 0x20, true, 0xaee44360a286c25a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.EndpointAddress", endpoint_address, 0x20, 0x10, true, 0xae3b83cb97338c1c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.ResourceId", resource_id, 0x30, 0x20, true, 0xe5acbe3fc1cfd749)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usbd_endpoint_offload_mode_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.Mode", mode, 0x50, 0x20, true, 0x490792935c646673)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.RootHubPortNumber", root_hub_port_number, 0x70, 0x8, true, 0xc8d687fff319b0c5, 8, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.RouteString", route_string, 0x78, 0x14, true, 0x4e5e66b4b946c188, 20, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.Speed", speed, 0x8c, 0x4, true, 0x139f48320bf7181e, 4, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.UsbDeviceAddress", usb_device_address, 0x90, 0x8, true, 0x7e38d8c2436fde44, 8, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.SlotId", slot_id, 0x98, 0x8, true, 0x9f6f856c874f9209, 8, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.MultiTT", multi_tt, 0xa0, 0x1, true, 0xd22e93fe8893e0e5, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.LSOrFSDeviceConnectedToTTHub", ls_or_fs_device_connected_to_tt_hub, 0xa1, 0x1, true, 0x13de2f0d32e865f6, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.TransferSegmentLA", transfer_segment_la, 0xb0, 0x40, true, 0xe816dcb0b26fcd39)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.TransferSegmentVA", transfer_segment_va, 0xf0, 0x40, true, 0x869cd19c654e44ef)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.TransferRingSize", transfer_ring_size, 0x130, 0x40, true, 0x677ad169f7c1adb1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.TransferRingInitialCycleBit", transfer_ring_initial_cycle_bit, 0x170, 0x20, true, 0xc2622eafd2fea694)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.MessageNumber", message_number, 0x190, 0x20, true, 0x8a35cec8acf3d8f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.EventRingSegmentLA", event_ring_segment_la, 0x1b0, 0x40, true, 0x20914d2fdd3407cf)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.EventRingSegmentVA", event_ring_segment_va, 0x1f0, 0x40, true, 0x13b8ff219b952879)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.EventRingSize", event_ring_size, 0x230, 0x40, true, 0x1aa6d2b87ed42efa)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_ENDPOINT_OFFLOAD_INFORMATION.EventRingInitialCycleBit", event_ring_initial_cycle_bit, 0x270, 0x20, true, 0x423d661d3c556e42)
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
#endif