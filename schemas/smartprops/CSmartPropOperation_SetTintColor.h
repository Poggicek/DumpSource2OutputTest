class CSmartPropOperation_SetTintColor : public CSmartPropOperation
{
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode;
	CSmartPropAttributeInt m_ColorSelection;
	CSmartPropAttributeApplyColorMode m_Mode;
	CUtlVector< ColorChoice_t > m_ColorChoices;
};
