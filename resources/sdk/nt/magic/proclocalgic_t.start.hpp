#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALGIC.Type", type, 0x0, 0x0, false, 0x1dd0a2a4b501224b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALGIC.Length", length, 0x0, 0x0, false, 0x220bc4b11171e52b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALGIC.Identifier", identifier, 0x0, 0x0, false, 0x5c5f73cc4bd4d82)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALGIC.AcpiProcessorId", acpi_processor_id, 0x0, 0x0, false, 0xdbf573b331293ce4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALGIC.Flags", flags, 0x0, 0x0, false, 0x74e608212ce0c7c8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALGIC.ParkingProtocolVersion", parking_protocol_version, 0x0, 0x0, false, 0xb742a71dce6c3dd7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALGIC.PerformanceInterruptGsi", performance_interrupt_gsi, 0x0, 0x0, false, 0x920b339eacc53018)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCLOCALGIC.ParkedPhysicalAddress", parked_physical_address, 0x0, 0x0, false, 0xe48bc557920c4c20)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCLOCALGIC.ControllerPhysicalAddress", controller_physical_address, 0x0, 0x0, false, 0x99e7f628742a1c1d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCLOCALGIC.Gicv", gicv, 0x0, 0x0, false, 0x8acdb93c85f58da6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCLOCALGIC.Gich", gich, 0x0, 0x0, false, 0xaa87caf50f557d03)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALGIC.VgicMaintenanceInterrupt", vgic_maintenance_interrupt, 0x0, 0x0, false, 0x440ed1bbdab0e163)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCLOCALGIC.GicrBaseAddress", gicr_base_address, 0x0, 0x0, false, 0x1f4605ce6ba1ac20)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCLOCALGIC.Mpidr", mpidr, 0x0, 0x0, false, 0x54b056878a3a9930)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALGIC.ProcessorPowerEfficiencyClass", processor_power_efficiency_class, 0x0, 0x0, false, 0xc2848ec4b5be356c)
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
#endif