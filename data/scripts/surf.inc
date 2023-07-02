EventScript_UseSurf::
	checkitem ITEM_SURFBOARD, 1
	goto_if_eq VAR_RESULT, FALSE, EventScript_CantUseSurf
	lockall
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
EventScript_CantUseSurf::
	msgbox gText_PlayerCantUseSurf, MSGBOX_DEFAULT
	releaseall
	end
