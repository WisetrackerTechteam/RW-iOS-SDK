(function (window, undefined) { 
	var DOX = {};
	window.DOX = window.DOX || DOX;   
	/**
	 * Data Class Define.
	 **/  
	DOX.createXProperties = function(){
		var XProperties = {
			_data:{}, 
			putAll:function(obj){
				try { 
				  if (obj === null || typeof(obj) !== 'object')
					  return;
					   
				  for (var attr in obj) {
					if (obj.hasOwnProperty(attr)) {
					  this._data[attr] = obj[attr];
					}
				  }  
				} catch (e) {
					console.log(e);
				}
				return this;
			},
			clearAll:function(){
				try {
					if (Object.keys(this).length > 0) {
						for( let key in this ){
							delete this._data[key];
						}
					}			
				} catch (e) {
					console.log(e);
				}
				return this;
			},  
			remove:function(key){
				if( key != "" ){
					delete this._data[key];	
				} 
				return this;
			}, 
			set:function( key, value ){ 
				try {
					this._data[key] = value;	
				} catch (e) {
					console.log(e);
				} 
				return this;
			}  
		}
		return XProperties;
	}  
	DOX.createXEvent = function(){
		var XEvent = {
			_data:{}, 
			setEventName:function( value ){ 
				this._data["evtname"] = value; 
				return this;
			},
			setProperties(value){
				this._data["properties"] = value._data;
				return this;
			}  
		}
		return XEvent;
	}  
	DOX.createXIdentify = function(){
		var XIdentify = { 
			_data:{}, 
			clearAll:function(){
				try {  
					if (Object.keys(this._data).length > 0) {
						for( var key in this._data ){
							delete this._data[key];
						}
					}			
				} catch (e) {
					console.log(e);
				}
				return this;
			},  
			duplicateCheck:function(chk, action){
				var flag = false;
				try { 
					var _arr = ["$set", "$setOnce", "$unset", "$add", "$append", "$prepend" ]; 
					for( var idx = 0; idx < _arr.length; idx++){
						if( typeof this._data[_arr[idx]] != "undefined"){
							if (Object.keys(this._data[_arr[idx]]).length > 0) {
								for( var key in this._data[_arr[idx]] ){
									if( key == chk ){
										flag = true;
										throw ("[Wisetracker] property "+key+" already used in this identify, skipping operation "+ action );
									}
								}
							}
						} 
					}  
				} catch (e) {
					console.log(e);
				} 
				return flag;
			}, 
			set:function( key, value ){ 
				try { 
					if(!this.duplicateCheck(key,"$set")){ 
						if( typeof this._data["$set"] === "undefined"){ 
							this._data["$set"] = DOX.createXProperties().set(key, value)._data;	
						}else{
							this._data["$set"][key] = value;	
						}  
					} 	
				} catch (e) {
					console.log(e);
				}  
				return this;
			},   
			setOnce:function( key, value ){
				try {		
					if(!this.duplicateCheck(key,"$setOnce")){ 
						if( typeof this._data["$setOnce"] === "undefined"){  
							this._data["$setOnce"] = DOX.createXProperties().set(key, value)._data; 
						}else{
							this._data["$setOnce"][key] = value; 
						}  
					} 	 
				} catch (e) {
					console.log(e);
				}
				return this;
			}, 
			unset:function( key ){
				try {
					if(!this.duplicateCheck(key,"$unset")){ 
						if( typeof this._data["$unset"] === "undefined"){  
							this._data["$unset"] = DOX.createXProperties().set(key, "")._data; 
						}else{
							this._data["$unset"][key] = ""; 
						}  
					} 	  
				} catch (e) {
					console.log(e);
				}
				return this;
			}, 
			add:function( key, increment ){
				try {  
					if(!this.duplicateCheck(key,"$add")){ 
						if( typeof this._data["$add"] === "undefined"){  
							this._data["$add"] = DOX.createXProperties().set(key, increment)._data; 
						}else{
							this._data["$add"][key] = increment; 
						}  
					}  
				} catch (e) {
					console.log(e);
				} 
				return this;
			},  
			append:function( key, value ){ 
				try {  
					if(!this.duplicateCheck(key,"$append")){ 
						if( typeof this._data["$append"] === "undefined"){  
							this._data["$append"] = DOX.createXProperties().set(key, value)._data; 
						}else{
							this._data["$append"][key] = value; 
						}  
					}   
				} catch (e) {
					console.log(e);
				}
				return this; 
			},  
			prepend:function( key, value ){ 
				try { 
					if(!this.duplicateCheck(key,"$prepend")){ 
						if( typeof this._data["$prepend"] === "undefined"){  
							this._data["$prepend"] = DOX.createXProperties().set(key, value)._data; 
						}else{
							this._data["$prepend"][key] = value; 
						}  
					}   
				} catch (e) {
					console.log(e);
				}
				return this; 
			} 
		}
		return XIdentify;
	}  
	DOX.createXConversion = function(){
		var XConversion = {
			_data:{}, 
			setEventName:function( value ){ 
				this._data["cvrname"] = value; 
				return this;
			}, 
			setProperties:function(value){
				this._data["properties"] = value._data;
				return this;
			} 
		}
		return XConversion;
	} 
	DOX.createXRevenue = function(){
		var XRevenue = {
			_data:{}, 
			setOrderNo:function(value){
				this._data["ordNo"] = value;
				return this;
			}, 
			setEventType(value){
				this._data["eventType"] = value;
				return this;
			}, 
			setCurrency(value){
				this._data["curcy"] = value;
				return this;
			},
			setProperties(value){
				this._data["properties"] = value._data;
				return this;
			},
			setProductList(value){
				if(Array.isArray(value)){ 
					for( var ix = 0; ix < value.length; ix++){
						this.addProduct(value[ix]);
					} 
				}else{
					this.addProduct(value);
				}
				return this;
			}, 
			addProduct(value){ 
				if( typeof this._data["products"] == "undefined"){
					this._data["products"] = new Array(); 
				} 
				var _arr = this._data["products"];
				_arr.push(value._data); 
				return this;
			} 
		}
		return XRevenue;
	} 
	DOX.createXProduct = function(){
		var XProduct = {
			_data:{}, 
			setFirstCategory:function(value){ 
				this._data["pg1"] = value;
				return this;	
			},
			setSecondCategory:function(value){
				this._data["pg2"] = value;
				return this;
			},	
			setThirdCategory:function(value){
				this._data["pg3"] = value;
				return this;
			},
			setDetailCategory:function(value){
				this._data["pg4"] = value;
				return this;
			},
			setProductCode:function(value){
				this._data["pnc"] = value;
				return this;
			},
			setAmount:function(value){
				this._data["amt"] = value;
				return this;
			},
			setQuantity:function(value){
				this._data["ea"] = value;
				return this;
			},
			setProductOrderNo:function(value){
				this._data["ordPno"] = value; 
				return this;
			},
			setProperties:function(value){
				this._data["properties"] = value._data;
				return this;
			} 	
		}
		return XProduct;
	} 
	/**
	 Json Object 
	**/
	DOX._json = new Object();
	DOX._revenueJson = new Object();
	DOX._conversionJson = new Object();
	DOX._eventJson = new Object();
	DOX._userPropertiesJson = new Object();
	DOX._groupPropertiesJson = new Object();
	
	/**
	DOX function 
	**/
    DOX.Android = function() {
        return /Android/i.test(navigator.userAgent);
    }
    DOX.iOS = function() {
        return /iPhone|iPad|iPod/i.test(navigator.userAgent);
    } 
	DOX.logEvent = function( event ){
   		try{   
			var integrationData = new Object();
			integrationData["events"] = event._data; 
			console.log("---------------------------------");
			console.log( integrationData );
			console.log("---------------------------------");
			if( DOX.Android() ){  
					// send to sdk integrationData
			}else if( DOX.iOS() ){  
					// send to sdk integrationData
					DOX._eventJson = event._data;
	        		window.location = 'jscall-dox:logEvent';
			} 
   		}catch(exception){}
       return this;
	}
	DOX.userIdentify = function( identify ){
   		try{   
			var integrationData = new Object();
			integrationData["userproperties"] = identify._data; 
			console.log("---------------------------------");
			console.log( integrationData );
			console.log("---------------------------------");
			if( DOX.Android() ){  
					// send to sdk integrationData
			}else if( DOX.iOS() ){  
					// send to sdk integrationData
					DOX._userPropertiesJson = identify._data;
	        		window.location = 'jscall-dox:userIdentify';
			} 
   		}catch(exception){}
       return this;
	} 
	DOX.groupIdentify = function( key, value, identify ){
   		try{   
			var integrationData = new Object(); 
			var groups = new Object();
			groups[key] = value;
			integrationData["groups"] = groups;
			integrationData["groupproperties"] = identify._data;  
			console.log("---------------------------------");
			console.log( integrationData );
			console.log("---------------------------------");
			if( DOX.Android() ){  
					// send to sdk integrationData
			}else if( DOX.iOS() ){  
					// send to sdk integrationData
					DOX._groupPropertiesJson = integrationData;
	        		window.location = 'jscall-dox:groupIdentify';
			} 
   		}catch(exception){}
       return this;
	}
	DOX.logConversion = function(conversion){
   		try{   
			var integrationData = new Object();
			integrationData["conversion"] = conversion._data; 
			console.log("---------------------------------");
			console.log( integrationData );
			console.log("---------------------------------");
			if( DOX.Android() ){  
					// send to sdk integrationData
			}else if( DOX.iOS() ){  
					// send to sdk integrationData
					DOX._conversionJson = conversion._data;
	        		window.location = 'jscall-dox:logConversion';
			} 
   		}catch(exception){}
       return this;
	} 
	DOX.logRevenue = function(revenue){
   		try{   
			var integrationData = new Object();
			integrationData["revenue"] = revenue._data; 
			console.log("---------------------------------");
			console.log( integrationData );
			console.log("---------------------------------");
			if( DOX.Android() ){  
					// send to sdk integrationData
			}else if( DOX.iOS() ){  
					console.log("-------------iOS----------------");
					// send to sdk integrationData
					DOX._revenueJson = revenue._data;
	        		window.location = 'jscall-dox:logRevenue';
			} 
   		}catch(exception){}
       return this;
	} 
	
	/**
	DOX function for iOS
	**/

   DOX.getSessionJson = function() {
   		return JSON.stringfy(DOX._sessionJson);
   };
   
   DOX.getRevenueJson = function() {
		return JSON.stringify(DOX._revenueJson);
   };
   DOX.getConversionJson = function() {
		return JSON.stringify(DOX._conversionJson);
   };
   DOX.getEventJson = function() {
		return JSON.stringify(DOX._eventJson);
   };
   DOX.getUserPropertiesJson = function() {
		return JSON.stringify(DOX._userPropertiesJson);
   };
   DOX.getGroupPropertiesJson = function() {
   		return JSON.stringify(DOX._groupPropertiesJson);
   }; 
 
}(window)); 