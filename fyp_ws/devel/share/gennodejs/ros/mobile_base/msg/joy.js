// Auto-generated. Do not edit!

// (in-package mobile_base.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class joy {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.dirA = null;
      this.dirB = null;
      this.speedA = null;
      this.speedB = null;
    }
    else {
      if (initObj.hasOwnProperty('dirA')) {
        this.dirA = initObj.dirA
      }
      else {
        this.dirA = false;
      }
      if (initObj.hasOwnProperty('dirB')) {
        this.dirB = initObj.dirB
      }
      else {
        this.dirB = false;
      }
      if (initObj.hasOwnProperty('speedA')) {
        this.speedA = initObj.speedA
      }
      else {
        this.speedA = 0;
      }
      if (initObj.hasOwnProperty('speedB')) {
        this.speedB = initObj.speedB
      }
      else {
        this.speedB = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type joy
    // Serialize message field [dirA]
    bufferOffset = _serializer.bool(obj.dirA, buffer, bufferOffset);
    // Serialize message field [dirB]
    bufferOffset = _serializer.bool(obj.dirB, buffer, bufferOffset);
    // Serialize message field [speedA]
    bufferOffset = _serializer.int16(obj.speedA, buffer, bufferOffset);
    // Serialize message field [speedB]
    bufferOffset = _serializer.int16(obj.speedB, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type joy
    let len;
    let data = new joy(null);
    // Deserialize message field [dirA]
    data.dirA = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [dirB]
    data.dirB = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [speedA]
    data.speedA = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [speedB]
    data.speedB = _deserializer.int16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 6;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mobile_base/joy';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '65a21cca78a5147fa5f897d0fbef56fe';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool dirA
    bool dirB
    int16 speedA
    int16 speedB
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new joy(null);
    if (msg.dirA !== undefined) {
      resolved.dirA = msg.dirA;
    }
    else {
      resolved.dirA = false
    }

    if (msg.dirB !== undefined) {
      resolved.dirB = msg.dirB;
    }
    else {
      resolved.dirB = false
    }

    if (msg.speedA !== undefined) {
      resolved.speedA = msg.speedA;
    }
    else {
      resolved.speedA = 0
    }

    if (msg.speedB !== undefined) {
      resolved.speedB = msg.speedB;
    }
    else {
      resolved.speedB = 0
    }

    return resolved;
    }
};

module.exports = joy;
