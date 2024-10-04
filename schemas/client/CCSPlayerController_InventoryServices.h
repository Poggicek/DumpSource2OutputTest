class CCSPlayerController_InventoryServices : public CPlayerControllerComponent
{
	uint16 m_unMusicID;
	MedalRank_t[6] m_rank;
	int32 m_nPersonaDataPublicLevel;
	int32 m_nPersonaDataPublicCommendsLeader;
	int32 m_nPersonaDataPublicCommendsTeacher;
	int32 m_nPersonaDataPublicCommendsFriendly;
	int32 m_nPersonaDataXpTrailLevel;
	C_UtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots;
};
