class CAssetWarningCheck
{
	CUtlString m_AssetType;
	CBufferString m_RequireSearchableIntKey;
	int32 m_RequireSearchableIntValue;
	bool m_bOnlyWarnIfGameFilePresent;
	bool m_bOnlyWarnIfContentFilePresent;
	bool m_bOnlyWarnAddons;
	CUtlVector< CUtlString > m_ExcludeAddonNames;
	CUtlString m_FixDescription;
	AssetWarningFixType_t m_FixType;
};
