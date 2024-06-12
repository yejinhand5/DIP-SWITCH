uint8_t GetModbus_ADDR(void)
{
	uint8_t DIP_Num = 0;
	uint8_t addr;

	DIP_Num |= DIP1_State ? 0x00 : 0x01;
	DIP_Num |= DIP2_State ? 0x00 : 0x02;
	DIP_Num |= DIP3_State ? 0x00 : 0x04;
	DIP_Num |= DIP4_State ? 0x00 : 0x08;

	addr = DIP_Num;
	return addr;
}