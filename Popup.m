//
//  Popup.m
//  PopupExample
//
//  Created by Vidya Ramamurthy on 18/12/15.
//  Copyright © 2015 BridgeLabz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import<Cocoa/Cocoa.h>
#import "Popup.h"
@implementation Popup:NSObject


- (IBAction)add:(id)sender {
    [_pop1 addItemWithTitle:[_popTex stringValue]];
    
}

- (IBAction)update:(id)sender {
    [_lable setStringValue:[_pop1 titleOfSelectedItem] ];
}
@end






