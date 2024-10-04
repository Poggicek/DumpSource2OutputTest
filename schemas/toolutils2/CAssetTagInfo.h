class CAssetTagInfo
{
	CUtlString m_TagName;
	CUtlString m_TagDescription;
	CUtlString m_TagIcon;
	Color m_TagColor;
	CUtlVector< CUtlString > m_TagAliases;
	CUtlString m_ThumbnailOverlayImage;
	bool m_bTagIndicatesRejectedAsset;
	bool m_bTagHidesAssetByDefault;
	CUtlString m_RestrictAutoTagToAssetType;
	CUtlString m_AutoFilterTag;
	AutoTagVDataCondition_t m_AutoDataTag;
};
