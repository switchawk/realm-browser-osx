//
//  RLMRealmViewController.h
//  RealmBrowser
//
//  Created by Matt Bauer on 10/27/15.
//  Copyright © 2015 Realm inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "RLMDocument.h"

@interface RLMRealmViewController : NSViewController

@property (weak) IBOutlet RLMDocument *document;

@end
