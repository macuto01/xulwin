**Goals of the XULWin project**
  * Make Windows programming more fun by generating the GUI from a XUL document.
  * Native look and feel thanks to using the WinAPI directly.
  * Provide an underlying C++ API so that the widgets can also be created in code.
  * To be compatible with the Mozilla XUL implementation. Ideally any XUL document should be rendered identically in XULWin and Mozilla XULRunner.
  * Allow easy integration with existing Windows code.
  * The code should be self-documenting. Provide readable and easy to understand header files.
  * Minimize dependencies to other external libraries.
  * To be compatible with free versions of Visual Studio. There are no dependencies to ATL or MFC.

**Advantages of XULWin**

  * GUI design is much faster and more fun with XUL.
  * XULWin apps are small, fast, and have a native look and feel.
  * XULWin is easy to integrate with your existing C++ code. Statically linking with XULWin is much easier than writing XPCOM components.

**Drawbacks of XULWin**

  * Windows only.
  * It a project that's I'm doing just for fun. Please don't use it for serious work :)


**Remarks**
  * The XUL parser will ignore unrecognized elements (and also their child elements).
  * Only inline CSS is supported (by using the 'style' attribute).
  * There is no JavaScript support. Although there have been attempts for this. The main problem is that JavaScript support would require a full DOM implementation, which is out of the scope of this project.
  * There is some SVG support as well. Paths and polygons are reasonably well supported (see the svg samples).


**Dependencies to external libraries**
  * Poco C++ libraries: Poco Foundation, Poco XML (SAX parser)
  * Boost: scoped\_ptr, shared\_ptr, lexical\_cast, noncopyable, bind, function
  * Windows GDI+


**Supported features**
  * Rendering XUL documents (see list of supported XUL elements below).
  * Localization with external DTD documents containing the translations.
  * Inline CSS (no support for external css files).
  * SVG paths and polygons.


**List of currently supported XUL elements**

  * box
  * button
  * caption
  * checkbox
  * column
  * columns
  * deck
  * description
  * dialog
  * grid
  * groupbox
  * hbox
  * image
  * label
  * listbox
  * listcell
  * listcol
  * listcols
  * listhead
  * listheader
  * listitem
  * menu
  * menubar
  * menubutton
  * menuitem
  * menulist
  * menupopup
  * menuseparator
  * progressmeter
  * radio
  * radiogroup
  * row
  * rows
  * script
  * scrollbar
  * separator
  * spacer
  * statusbar
  * statusbarpanel
  * svg
  * svg:g
  * svg:path
  * svg:polygon
  * svg:rect
  * tab
  * tabbox
  * tabpanel
  * tabpanels
  * tabs
  * text
  * textbox
  * toolbar
  * toolbarbutton
  * tree
  * treecell
  * treechildren
  * treecol
  * treecols
  * treeitem
  * treerow
  * vbox
  * window
