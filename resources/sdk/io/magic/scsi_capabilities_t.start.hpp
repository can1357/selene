#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SCSI_CAPABILITIES.Length", length, 0x0, 0x20, true, 0x907e19f892bfe1bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SCSI_CAPABILITIES.MaximumTransferLength", maximum_transfer_length, 0x20, 0x20, true, 0x8287d3d3bb78db99)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SCSI_CAPABILITIES.MaximumPhysicalPages", maximum_physical_pages, 0x40, 0x20, true, 0xd0801c31696a1fac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SCSI_CAPABILITIES.SupportedAsynchronousEvents", supported_asynchronous_events, 0x60, 0x20, true, 0xf6724e4059a52494)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_SCSI_CAPABILITIES.AlignmentMask", alignment_mask, 0x80, 0x20, true, 0x4ffb4a30a26a4a48)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_SCSI_CAPABILITIES.TaggedQueuing", tagged_queuing, 0xa0, 0x8, true, 0xe16470bbda60ce55)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_SCSI_CAPABILITIES.AdapterScansDown", adapter_scans_down, 0xa8, 0x8, true, 0x98b32153eeb30002)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_SCSI_CAPABILITIES.AdapterUsesPio", adapter_uses_pio, 0xb0, 0x8, true, 0x96c08e66c393e8a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif