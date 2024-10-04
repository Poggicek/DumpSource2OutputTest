class CSmartPropOperation_CreateLocator : public CSmartPropTransformOperation
{
	CUtlString m_LocatorName;
	CSmartPropAttributeVector m_vOffset;
	CSmartPropAttributeFloat m_flDisplayScale;
	CSmartPropAttributeBool m_bConfigurable;
	CSmartPropAttributeBool m_bAllowTranslation;
	CSmartPropAttributeBool m_bAllowRotation;
	CSmartPropAttributeBool m_bAllowScale;
};
