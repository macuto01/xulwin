#ifndef MENUSEPARATOR_H_INCLUDED
#define MENUSEPARATOR_H_INCLUDED


#include "XULWin/Component.h"


namespace XULWin
{

    class MenuSeparator : public PassiveComponent
    {
    public:
        typedef PassiveComponent Super;

        MenuSeparator(Component * inParent, const AttributesMapping & inAttributesMapping);

        virtual bool init();

        bool initAttributeControllers();

        int calculateWidth(SizeConstraint inSizeConstraint) const;

        int calculateHeight(SizeConstraint inSizeConstraint) const;
    };

} // namespace XULWin


#endif // MENUSEPARATOR_H_INCLUDED
