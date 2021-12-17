import argparse
import logging


class Args(object):

    def __init__(self):
        l_parser = argparse.ArgumentParser()
        l_parser.add_argument('--parameters', type=str)
        l_args = l_parser.parse_args()
        try:
            l_a = l_args.parameters
            if not l_a:
                l_a = ''
        except:
            l_a = ''
        l_a = l_a.strip()
        l_a = l_a.replace('\"', '')
        l_a = l_a.replace('\'', '')
        self.args = l_a.strip()
        self.input_file = ''
        self.input_dir = ''
        self.log_file = ''

    def split(self):
        l_a = self.args
        if l_a and l_a.strip():  # if not isBlank(l_a)
            l_args = l_a.strip().split(';')
            for a in l_args:
                l_items = a.strip().split('=')
                if l_items and len(l_items) == 2:
                    l_k = l_items[0].strip().lower()
                    l_v = l_items[1].strip()
                    if l_k == 'input-file':
                        self.input_file = l_v
                    elif l_k == 'input-dir':
                        self.input_dir = l_v
                    elif l_k == 'log-file':
                        self.log_file = l_v
                    else:
                        logging.error(u'Splitting args {} key failed'.format(a))
                else:
                    logging.error(u'Splitting args {} format failed'.format(a))

    def log(self):
        logging.debug(u'Args: input_file={}'.format(self.input_file))
        logging.debug(u'Args: input_dir={}'.format(self.input_dir))
        logging.debug(u'Args: log_file={}'.format(self.log_file))
