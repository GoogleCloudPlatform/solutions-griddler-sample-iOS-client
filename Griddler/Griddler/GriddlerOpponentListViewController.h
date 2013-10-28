//
//  googleOpponentListViewController.h
//  Griddler
//
//  Copyright 2013 Google Inc. All Rights Reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "FrameworkUIViewController.h"


@interface GriddlerOpponentListViewController : FrameworkUIViewController<UITableViewDataSource, UITableViewDelegate>

@property (strong,atomic) NSMutableArray* dataSource;

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (weak, nonatomic) IBOutlet UISegmentedControl *listFilterSegmentControl;

- (IBAction)listFilterSegmentValueChanged:(id)sender;

@property (weak, nonatomic) IBOutlet UIImageView *noOpponentsImageView;

@property (weak, nonatomic) IBOutlet UILabel *noOpponentsText;

@end