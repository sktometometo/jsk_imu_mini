/*
 ******************************************************************************
 * File Name          : debug_printer.cpp
 * Description        : Debug Printer Class
 ******************************************************************************
 */

#ifndef __cplusplus
#error "Please define __cplusplus, because this is a c++ based file "
#endif

#include "debug_printer/debug_printer.h"

DebugPrinter::DebugPrinter()
{
    node_handle_ = NULL;
    debug_publisher_ = NULL;
}

DebugPrinter::DebugPrinter(ros::NodeHandle* nh)
{
    this->init(nh);
}

DebugPrinter::~DebugPrinter()
{
}

void DebugPrinter::init( ros::NodeHandle* nh )
{
    node_handle_ = nh;
    debug_publisher_ = new ros::Publisher("debug", &debug_msg_);
    node_handle_->advertise(*debug_publisher_);
}

void DebugPrinter::print( std::string message )
{
	this->print(message.c_str());
}

void DebugPrinter::print( const char* message )
{
	if ( node_handle_ == NULL ) {
	    return;
	}
    debug_msg_.stamp = node_handle_->now();
    debug_msg_.data = message;
    debug_publisher_->publish(&debug_msg_);
}
