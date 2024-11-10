import 'dart:ffi';
import 'package:flutter_avif_platform_interface/flutter_avif_platform_interface.dart';

class FlutterAvifIos extends FlutterAvifPlatform {
  static void registerWith() {
    FlutterAvifPlatform.api = FlutterAvifImpl(DynamicLibrary.executable());
  }
}
