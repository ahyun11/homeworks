#include "pch.h"
#include "Info.h"

#include"Print.h"

Info::Info()
{
	Print::GetInstance()->ResistInfo(this);
}