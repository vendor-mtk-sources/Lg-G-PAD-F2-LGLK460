#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

/* ***************************PART2:TODO define********************************** */
/* STEP_1(REQUIRED):Change config table. */
/*TODO: puts the config info corresponded to your TP here, the following is just
a sample config, send this config should cause the chip cannot work normally*/
#define CTP_CFG_GROUP0 {\
	0x41,0x20,0x03,0x00,0x05,0x0A,0x05,0x00,0x01,0x08,0x28,0x05,0x5A,\
	0x46,0x03,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x90,0x30,0xAA,0x32,0x34,0x31,0x0D,0x00,0x00,0x00,0x9A,0x03,\
	0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,\
	0x50,0x8A,0xC5,0x02,0x19,0x14,0x00,0x00,0xB4,0x21,0x00,0x99,0x28,\
	0x00,0x82,0x31,0x00,0x70,0x3B,0x00,0x61,0x48,0x00,0x61,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x19,0x18,0x17,0x16,0x15,\
	0x14,0x11,0x10,0x0F,0x0E,0x0D,0x0C,0x09,0x00,0x01,0x04,0x05,0x06,\
	0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2A,\
	0x29,0x28,0x27,0x26,0x25,0x24,0x23,0x22,0x21,0x20,0x1F,0x1E,0x1C,\
	0x1B,0x19,0x14,0x13,0x12,0x11,0x10,0x0F,0x0E,0x0D,0x0C,0x0A,0x08,\
	0x07,0x06,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x12,0x01\
}

#define GTP_CFG_GROUP0_CHARGER {\
	0x41,0x20,0x03,0x00,0x05,0x0A,0x05,0x00,0x01,0x08,0x28,0x05,0x5A,\
	0x46,0x03,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x90,0x30,0xAA,0x32,0x34,0x31,0x0D,0x00,0x00,0x00,0x9A,0x03,\
	0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,\
	0x50,0x8A,0xC5,0x02,0x19,0x14,0x00,0x00,0xB4,0x21,0x00,0x99,0x28,\
	0x00,0x82,0x31,0x00,0x70,0x3B,0x00,0x61,0x48,0x00,0x61,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x19,0x18,0x17,0x16,0x15,\
	0x14,0x11,0x10,0x0F,0x0E,0x0D,0x0C,0x09,0x00,0x01,0x04,0x05,0x06,\
	0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2A,\
	0x29,0x28,0x27,0x26,0x25,0x24,0x23,0x22,0x21,0x20,0x1F,0x1E,0x1C,\
	0x1B,0x19,0x14,0x13,0x12,0x11,0x10,0x0F,0x0E,0x0D,0x0C,0x0A,0x08,\
	0x07,0x06,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x12,0x01\
}

/* TODO puts your group2 config info here,if need. */
#define CTP_CFG_GROUP1 {\
	0x41,0x20,0x03,0x00,0x05,0x0A,0x05,0x00,0x01,0x08,0x28,0x05,0x5A,\
	0x46,0x03,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x90,0x30,0xAA,0x32,0x34,0x31,0x0D,0x00,0x00,0x00,0x9A,0x03,\
	0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,\
	0x50,0x8A,0xC5,0x02,0x19,0x14,0x00,0x00,0xB4,0x21,0x00,0x99,0x28,\
	0x00,0x82,0x31,0x00,0x70,0x3B,0x00,0x61,0x48,0x00,0x61,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x19,0x18,0x17,0x16,0x15,\
	0x14,0x11,0x10,0x0F,0x0E,0x0D,0x0C,0x09,0x00,0x01,0x04,0x05,0x06,\
	0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2A,\
	0x29,0x28,0x27,0x26,0x25,0x24,0x23,0x22,0x21,0x20,0x1F,0x1E,0x1C,\
	0x1B,0x19,0x14,0x13,0x12,0x11,0x10,0x0F,0x0E,0x0D,0x0C,0x0A,0x08,\
	0x07,0x06,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x12,0x01\
}

/* TODO puts your group2 config info here,if need. */
#define GTP_CFG_GROUP1_CHARGER {\
	0x41,0x20,0x03,0x00,0x05,0x0A,0x05,0x00,0x01,0x08,0x28,0x05,0x5A,\
	0x46,0x03,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x90,0x30,0xAA,0x32,0x34,0x31,0x0D,0x00,0x00,0x00,0x9A,0x03,\
	0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,\
	0x50,0x8A,0xC5,0x02,0x19,0x14,0x00,0x00,0xB4,0x21,0x00,0x99,0x28,\
	0x00,0x82,0x31,0x00,0x70,0x3B,0x00,0x61,0x48,0x00,0x61,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x19,0x18,0x17,0x16,0x15,\
	0x14,0x11,0x10,0x0F,0x0E,0x0D,0x0C,0x09,0x00,0x01,0x04,0x05,0x06,\
	0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2A,\
	0x29,0x28,0x27,0x26,0x25,0x24,0x23,0x22,0x21,0x20,0x1F,0x1E,0x1C,\
	0x1B,0x19,0x14,0x13,0x12,0x11,0x10,0x0F,0x0E,0x0D,0x0C,0x0A,0x08,\
	0x07,0x06,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
	0x00,0x00,0x12,0x01\
}

/* TODO puts your group3 config info here,if need. */
#define CTP_CFG_GROUP2 {\
}

/* TODO puts your group3 config info here,if need. */
#define GTP_CFG_GROUP2_CHARGER {\
}

/* TODO: define your config for Sensor_ID == 3 here, if needed */
#define CTP_CFG_GROUP3 {\
}

/* TODO puts your group3 config info here,if need. */
#define GTP_CFG_GROUP3_CHARGER {\
}

/* TODO: define your config for Sensor_ID == 4 here, if needed */
#define CTP_CFG_GROUP4 {\
}

/* TODO puts your group4 config info here,if need. */
#define GTP_CFG_GROUP4_CHARGER {\
}

/* TODO: define your config for Sensor_ID == 5 here, if needed */
#define CTP_CFG_GROUP5 {\
}

/* TODO puts your group5 config info here,if need. */
#define GTP_CFG_GROUP5_CHARGER {\
}


#endif /* _GT1X_CONFIG_H_ */
