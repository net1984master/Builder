//Чтобы убрать бордюрчик при использовании компонента TPageControl нужно в свойствах PageControl Align=alNone
//а в обработчике Resize для формы написать что-то вроде этого.
void __fastcall TFormName::FormResize(TObject *Sender)
{
 PageControlName->SetBounds(-15, -15,
    ClientWidth + 25, ClientHeight + 25);
}

//Источник:
//http://bcbjournal.org/articles/vol2/9811/Trouble_on_the_border.htm?PHPSESSID=456cdfb62256a98bc17db560bfb39a2e