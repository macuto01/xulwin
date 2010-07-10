#ifndef ITEMVIEW_H_INCLUDED
#define ITEMVIEW_H_INCLUDED


#include "Item.h"
#include "XULWin/Gdiplus.h"
#include "XULWin/GdiplusUtils.h"
#include "XULWin/WinUtils.h"
#include <string>
#include <vector>
#include <boost/noncopyable.hpp>
#include <boost/scoped_ptr.hpp>


namespace XULWin
{


    /**
     * ItemView is the abstract base class that contains view-specific data that belongs to an Item.
     */
    class ItemView : private boost::noncopyable
    {
    public:
        ItemView(ItemPtr inItem);

        const ItemPtr item() const;

        ItemPtr item();        
        
    private:
        ItemPtr mItem;
        boost::scoped_ptr<Gdiplus::Bitmap> mBitmap;
    };

    typedef std::vector<ItemView> ItemViews;

    bool operator < (const ItemView & lhs, const ItemView & rhs);

}


#endif // ITEMVIEW_H_INCLUDED
