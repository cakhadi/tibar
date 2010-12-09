/**
 * Your Copyright Here
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */
#import "TiModule.h"
#import "KrollCallback.h"

@interface TiBarModule : TiModule<UINavigationControllerDelegate, ZBarReaderDelegate>
{
@private
	ZBarReaderViewController *reader;
	KrollCallback *pickerSuccessCallback;
	KrollCallback *pickerErrorCallback;
	KrollCallback *pickerCancelCallback;
	
	BOOL continuous;

}

@end
