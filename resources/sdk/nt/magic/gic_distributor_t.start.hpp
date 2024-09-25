#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GIC_DISTRIBUTOR.Type", type, 0x0, 0x0, false, 0xeca2907c06b18ff3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GIC_DISTRIBUTOR.Length", length, 0x0, 0x0, false, 0xe68115db60be0d21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GIC_DISTRIBUTOR.Identifier", identifier, 0x0, 0x0, false, 0x95cb730a9e319cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GIC_DISTRIBUTOR.ControllerPhysicalAddress", controller_physical_address, 0x0, 0x0, false, 0x679d1d730f15bdfa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GIC_DISTRIBUTOR.GsivBase", gsiv_base, 0x0, 0x0, false, 0xcf6212ebf95945d2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GIC_DISTRIBUTOR.Version", version, 0x0, 0x0, false, 0xb16bd8f5af25ae25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif