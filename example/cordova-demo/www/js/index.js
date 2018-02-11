/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
var app = {
    // Application Constructor
    initialize: function() {
        document.addEventListener('deviceready', this.onDeviceReady.bind(this), false);
    },

    // deviceready Event Handler
    //
    // Bind any cordova events here. Common events are:
    // 'pause', 'resume', etc.
    onDeviceReady: function() {
        this.receivedEvent('deviceready');
    },

    // Update DOM on a Received Event
    receivedEvent: function(id) {
        var parentElement = document.getElementById(id);
        var listeningElement = parentElement.querySelector('.listening');
        var receivedElement = parentElement.querySelector('.received');

        listeningElement.setAttribute('style', 'display:none;');
        receivedElement.setAttribute('style', 'display:block;');

        console.log('Received Event: ' + id);
    },
    openUnity: function() {
		// It is possible to send a string message to Unity-side (optional)
		alert('openUnity');
        unityARCaller.launchAR( "my message for Unity-side", this.uReturnedFromUnity, this.uMessageReceivedFromUnity );
	},

	sendMessageToUnity: function() {
		alert('sendMessageToUnity');
		// Send a message to Unity while Unity is still running
		unityARCaller.sendMessage( "Function name", "Optional parameter" );
	},

	uReturnedFromUnity: function (param) {
		// param:String is the (optional) message returned from Unity-side
		alert( param );
	},

	uMessageReceivedFromUnity: function (message) {
		// message:String is the message received from Unity-side
		// If you call a UI-blocking function here like 'alert', subsequent messages from Unity
		// will be queued by the OS and will only be received after returning to Ionic and
		// unblocking the UI
		console.log( "=========" + message + "=========" );
	}
};

app.initialize();