/* Copyright (c) 2012, 2013  BlackBerry Limited.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include "applicationui.hpp"
#include "NfcShareHandler.hpp"

#include <bb/cascades/Application>
#include <bb/cascades/pickers/FilePicker>
#include <bb/cascades/pickers/FileType>

using namespace bb::cascades;

Q_DECL_EXPORT int main(int argc, char **argv)
{
    Application app(argc, argv);

    qmlRegisterUncreatableType<NfcShareHandler>("custom", 1, 0, "NfcShareHandler", "Access to enums");
    qmlRegisterType<bb::cascades::pickers::FilePicker>("custom", 1, 0, "FilePicker");
    qmlRegisterUncreatableType<bb::cascades::pickers::FileType>("custom", 1, 0, "FileType", "Access to enums");
    qmlRegisterType<FileListModel>();

//! [0]
    NfcShareHandler nfcShareHandler;

    // Create the Application UI object, this is where the main.qml file
    // is loaded and the application scene is set.
    ApplicationUI appui(nfcShareHandler);
//! [0]

    return Application::exec();
}
