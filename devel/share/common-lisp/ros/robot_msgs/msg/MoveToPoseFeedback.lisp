; Auto-generated. Do not edit!


(cl:in-package robot_msgs-msg)


;//! \htmlinclude MoveToPoseFeedback.msg.html

(cl:defclass <MoveToPoseFeedback> (roslisp-msg-protocol:ros-message)
  ((percentage
    :reader percentage
    :initarg :percentage
    :type cl:float
    :initform 0.0))
)

(cl:defclass MoveToPoseFeedback (<MoveToPoseFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveToPoseFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveToPoseFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robot_msgs-msg:<MoveToPoseFeedback> is deprecated: use robot_msgs-msg:MoveToPoseFeedback instead.")))

(cl:ensure-generic-function 'percentage-val :lambda-list '(m))
(cl:defmethod percentage-val ((m <MoveToPoseFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robot_msgs-msg:percentage-val is deprecated.  Use robot_msgs-msg:percentage instead.")
  (percentage m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveToPoseFeedback>) ostream)
  "Serializes a message object of type '<MoveToPoseFeedback>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'percentage))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveToPoseFeedback>) istream)
  "Deserializes a message object of type '<MoveToPoseFeedback>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'percentage) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveToPoseFeedback>)))
  "Returns string type for a message object of type '<MoveToPoseFeedback>"
  "robot_msgs/MoveToPoseFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveToPoseFeedback)))
  "Returns string type for a message object of type 'MoveToPoseFeedback"
  "robot_msgs/MoveToPoseFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveToPoseFeedback>)))
  "Returns md5sum for a message object of type '<MoveToPoseFeedback>"
  "a2e49c0d6ad0ad2cee62709e672c242a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveToPoseFeedback)))
  "Returns md5sum for a message object of type 'MoveToPoseFeedback"
  "a2e49c0d6ad0ad2cee62709e672c242a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveToPoseFeedback>)))
  "Returns full string definition for message of type '<MoveToPoseFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Feedback~%float32 percentage~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveToPoseFeedback)))
  "Returns full string definition for message of type 'MoveToPoseFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Feedback~%float32 percentage~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveToPoseFeedback>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveToPoseFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveToPoseFeedback
    (cl:cons ':percentage (percentage msg))
))