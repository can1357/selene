#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::eisa_irq_descriptor_t), "_EISA_IRQ_CONFIGURATION.ConfigurationByte", configuration_byte, 0x0, 0x8, true, 0x9e281cda26f2a75b)
#else
#define _m00
#endif