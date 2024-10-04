class CSmartPropElement_PickOne : public CSmartPropElement_Group
{
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode;
	CSmartPropAttributeInt m_SpecificChildIndex;
	CSmartPropAttributeBool m_bConfigurable;
	CSmartPropAttributeVector m_vHandleOffset;
	CSmartPropAttributeColor m_HandleColor;
	CSmartPropAttributeInt m_HandleSize;
	ConfigurationHandleShape_t m_HandleShape;
};
