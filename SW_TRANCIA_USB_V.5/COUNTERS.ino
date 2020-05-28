void COUNTERS() {

  if (MOD_A)
  {
    TOT_A = READ_COUNT(TOT_A_EEPROM) + 1;
    PART_AA = READ_COUNT(PART_AA_EEPROM) + 1;

    // INCREASE DIRECTLY IN THE FUNCTION
    WRITE_COUNT(TOT_A, TOT_A_EEPROM);
    WRITE_COUNT(PART_AA, PART_AA_EEPROM);
  }
  if (MOD_B)
  {
    TOT_B = READ_COUNT(TOT_B_EEPROM) + 1;
    PART_BB = READ_COUNT(PART_BB_EEPROM) + 1;

    // INCREASE DIRECTLY IN THE FUNCTION
    WRITE_COUNT(TOT_B, TOT_B_EEPROM);
    WRITE_COUNT(PART_BB, PART_BB_EEPROM);
  }
}
