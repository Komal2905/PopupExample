//
//  Popup.h
//  PopupExample
//
//  Created by Vidya Ramamurthy on 18/12/15.
//  Copyright © 2015 BridgeLabz. All rights reserved.
//

#ifndef Popup_h
#define Popup_h
#import<Cocoa/Cocoa.h>
#import<Foundation/Foundation.h>
@interface Popup :NSObject
@property (weak) IBOutlet NSPopUpButton *pop1;

@property (weak) IBOutlet NSTextField *popTex;

@property (weak) IBOutlet NSTextField *lable;

- (IBAction)add:(id)sender;

- (IBAction)update:(id)sender;
@end

#endif /* Popup_h */
