using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using cppblbridge;
using System.Threading;

namespace wpf_proj {
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window {


        CppBLBridge cppBLBridge;
        public MainWindow() {
            InitializeComponent();
            cppBLBridge = new CppBLBridge();
        }
       

        private void button_Click(object sender, RoutedEventArgs e) {
            Thread th = new Thread(new ThreadStart(Show));
            th.Start();
        }

        void Show() {
            while (true) {
                Dispatcher.Invoke(() => label.Content = cppBLBridge.getTestValue().ToString());
            }
            
        }

        private void button1_Click(object sender, RoutedEventArgs e) {
            cppBLBridge.SetTime(Convert.ToInt32(textBox.Text));
        }
    }
}
